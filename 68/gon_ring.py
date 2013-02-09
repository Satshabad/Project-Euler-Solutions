from copy import deepcopy

def generate_tuples(high, target):
    all_tuples = []

    def generate_tuples_helper(high, target, current):

        if len(current) == 3:
            if sum(current) == target:
                all_tuples.append(current[:])
            return

        for i in range(1, high+1):
            if not i in current:
                current.append(i)
                generate_tuples_helper(high, target, current)
                del current[-1]

    generate_tuples_helper(high, target, [])
    return all_tuples


def find_ring(sum_num, highest_num):
    set_of_rings = []
    ring = set()

    def find_sol(current, middle_target, used_nums, starter_mid, chain_num):

        canidates = [ x for x in all_chains if (x[1] == middle_target and not x[0] in used_nums) and ((not x[2] in used_nums) or (x[2] == starter_mid and chain_num == 4))]

        if not canidates and chain_num == 5:
            set_of_rings.append(deepcopy(ring))

        for canidate in canidates:
            ring.add(tuple(canidate))
            find_sol(canidate, canidate[2], used_nums.union(set(canidate)), starter_mid, chain_num+1)
            ring.remove(tuple(canidate))


    all_chains = generate_tuples(highest_num, sum_num)

    starters = [ x for x in all_chains if x[0] == 10]

    for starter in starters:
        ring.add(tuple(starter))
        find_sol(starter, starter[2], set(starter), starter[1], 1)
        ring.remove(tuple(starter))

    return set_of_rings

