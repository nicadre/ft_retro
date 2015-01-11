// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ennemy.class.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 11:07:34 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 11:14:46 by niccheva         ###   ########.fr       //
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

/* ****************************** Destructors ******************************* */
	~Ennemy(void);

/* *************************** Operator Overload **************************** */
	Ennemy const			&operator=(Ennemy const & rhs);

	virtual void		shoot(void) const;
};

#endif //	ENNEMY_CLASS_HPP