// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ship.class.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:24:16 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 10:24:16 by niccheva         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef		SHIP_CLASS_HPP
# define	SHIP_CLASS_HPP

# include "Mobil.class.hpp"

class Ship : public Mobil {
protected:
	int					_HP;
	bool				_canShot;

public:
/* ****************************** Constructors ****************************** */
	Ship(void);
	Ship(Ship const & src);

/* ****************************** Destructors ******************************* */
	~Ship(void);

/* *************************** Operator Overload **************************** */
	Ship const			&operator=(Ship const & rhs);

};

#endif //	SHIP_CLASS_HPP
