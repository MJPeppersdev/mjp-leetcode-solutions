function hasCycle(head: ListNode | null): boolean {
    let slow = head;
    let fast = head;

    while (fast && fast.next) {
        if (slow) {
            slow = slow.next;
        }
        fast = fast.next.next;
        if (slow == fast) {
            return true;
        }
    }

    return false;
}