.. _faq:

Frequently Asked Questions
==========================


.. _bulk:

What is Bulk Rejection?
-----------------------

    The RCR algorithm is iterative; without bulk rejection, 
    only one outlier is rejected per iteration. *With* bulk rejection,
    multiple outliers can be rejected per iteration, with hardly any negative
    effect on final results. This creates a huge speed-up, especially for large datasets.
    See Section 5 of :ref:`papers` for more info.