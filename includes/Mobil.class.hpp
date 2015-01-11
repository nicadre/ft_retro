// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Mobil.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:04:13 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 18:51:09 by llapillo         ###   ########.fr       //
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
	Mobil(float x, float y);

/* ****************************** Destructors ******************************* */
	~Mobil(void);

/* *************************** Operator Overload **************************** */
	Mobil const			&operator=(Mobil const & rhs);

	void				move(float x, float y);

	void				setX(float const x);
	void				setY(float const y);
	void				setForm(char const form);
};

#endif //	MOBIL_CLASS_HPP
