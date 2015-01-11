// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Mobil.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:04:13 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 10:06:10 by niccheva         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef		MOBIL_CLASS_HPP
# define	MOBIL_CLASS_HPP

# include "AEntity.class.hpp"

class Mobil : public AEntity {
public:
/* ****************************** Constructors ****************************** */
	Mobil(void);
	Mobil(Mobil const & src);

/* ****************************** Destructors ******************************* */
	~Mobil(void);

/* *************************** Operator Overload **************************** */
	Mobil const			&operator=(Mobil const & rhs);

	void				move(int x, int y);
};

#endif //	MOBIL_CLASS_HPP
