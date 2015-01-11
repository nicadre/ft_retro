// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ennemy.class.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 11:07:34 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 21:32:54 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef		ENNEMY_CLASS_HPP
# define	ENNEMY_CLASS_HPP

# include "AShip.class.hpp"
# include "general.hpp"

class Ennemy : public AShip {
public:

	static int		score;

/* ****************************** Constructors ****************************** */
	Ennemy(void);
	Ennemy(Ennemy const & src);
	Ennemy(float x, float y);
/* ****************************** Destructors ******************************* */
	~Ennemy(void);

/* *************************** Operator Overload **************************** */
	Ennemy const			&operator=(Ennemy const & rhs);

	void				move(void);
};

#endif //	ENNEMY_CLASS_HPP
