import numpy as np
from numpy.testing import assert_, assert_equal, assert_array_equal

import numpymatrix as npm


class TestView:
    def test_type(self):
        x = np.array([1, 2, 3])
        assert_(isinstance(x.view(npm.matrix), npm.matrix))

    def test_keywords(self):
        x = np.array([(1, 2)], dtype=[('a', np.int8), ('b', np.int8)])
        # We must be specific about the endianness here:
        y = x.view(dtype='<i2', type=npm.matrix)
        assert_array_equal(y, [[513]])

        assert_(isinstance(y, npm.matrix))
        assert_equal(y.dtype, np.dtype('<i2'))
