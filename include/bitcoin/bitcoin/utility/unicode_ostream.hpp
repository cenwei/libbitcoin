﻿/**
 * Copyright (c) 2011-2015 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * libbitcoin is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_UNICODE_OSTREAM_HPP
#define LIBBITCOIN_UNICODE_OSTREAM_HPP

#include <iostream>

namespace libbitcoin {

/**
 * Class to expose a widening output stream.
 */
class unicode_ostream
    : public std::ostream
{
public:
    /**
     * Construct instance of a conditionally-widening output stream.
     * @param[in]  narrow_stream  A narrow output stream such as std::cout.
     * @param[in]  wide_stream    A wide output stream such as std::wcout.
     */
    unicode_ostream(std::ostream& narrow_stream, std::wostream& wide_stream);
    
    /**
     * Delete the unicode_streambuf that wraps wide_stream.
     */
    ~unicode_ostream();
};

} // namespace libbitcoin

#endif
