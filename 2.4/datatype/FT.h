/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __FT_H__
#define __FT_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* formatted text data */
struct FT : public HL7DataElement {
  FT() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "FT"; }
  FT* create() const { return new FT(); }
};

} /* End of namespace HL7_24 */

#endif /* __FT_H__ */