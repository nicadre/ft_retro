// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ennemy.class.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 11:07:34 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 19:29:09 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef		ENNEMY_CLASS_HPP
# define	ENNEMY_CLASS_HPP

# include "AShip.class.hpp"

class Ennemy : public AShip {
public:
/* ****************************** Constructors ****************************** */
	Ennemy(void);
	Ennemy(Ennemy const & src);
	Ennemy(float x, float y);
/* ****************************** Destructors ******************************* */
	~Ennemy(void);

/* *************************** Operator Overload **************************** */
	Ennemy const			&operator=(Ennemy const & rhs);

	virtual void		shoot(void) const;
	void				move(void);
};

#endif //	ENNEMY_CLASS_HPP
