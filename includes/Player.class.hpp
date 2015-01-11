// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Player.class.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:43:40 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 13:02:53 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef		PLAYER_CLASS_HPP
# define	PLAYER_CLASS_HPP

# include <iostream>
# include "AShip.class.hpp"

class Player : public AShip {
private:
	std::string				_name;
	int						_level;
	virtual void		shoot(void) const;
public:
/* ****************************** Constructors ****************************** */
	Player(void);
	Player(Player const & src);
	Player(std::string const name);

/* ****************************** Destructors ******************************* */
	~Player(void);

/* *************************** Operator Overload **************************** */
	Player const			&operator=(Player const & rhs);


	std::string				getName(void) const;
	int						getLevel(void) const;
};

#endif //	PLAYER_CLASS_HPP
