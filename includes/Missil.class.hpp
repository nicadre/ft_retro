// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Missil.class.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 20:28:43 by llapillo          #+#    #+#             //
//   Updated: 2015/01/11 21:06:14 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MISSIL_CLASS_HPP
# define MISSIL_CLASS_HPP

# include <iostream>
# include "general.hpp"

class Missil : public Mobil {

public:

	Missil(void);
	Missil(Missil const & missil);
	Missil(float x, float y);
	~Missil(void);

	Missil &	operator=(Missil const & rhs);
	void				setX(float const x);
	void				setY(float const y);
	void				move(void);
};

#endif
