/**
 * Computes the total price for count items.
 * Items over the bulk limit are half price.
 * Returns 0 if any input is negative.
 */
int price(int peritem, int count, int bulk_limit) {

    if (peritem < 0 || count < 0 || bulk_limit < 0) {
        return 0;
    }

    if (count <= bulk_limit) {
        return peritem * count;
    }

    int regular_price = bulk_limit * peritem;
    int extra_items = count - bulk_limit;
    int half_price = extra_items * (peritem / 2);

    return regular_price + half_price;
}