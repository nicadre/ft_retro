// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AShip.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 10:24:16 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 13:23:58 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef		ASHIP_CLASS_HPP
# define	ASHIP_CLASS_HPP

# include "Mobil.class.hpp"

class AShip : public Mobil {
protected:
	int					_HP;
	bool				_canShot;
	virtual void		shoot(void) const = 0;
	void				die(void);

public:
/* ****************************** Constructors ****************************** */
	AShip(void);
	AShip(AShip const & src);

/* ****************************** Destructors ******************************* */
	~AShip(void);

/* *************************** Operator Overload **************************** */
	AShip const			&operator=(AShip const & rhs);

	int		getHP(void) const ;
	void	setHP(int const HP);
	bool	getCanShot(void) const;
	void	setCanShot(bool const canShot);

};

#endif //	ASHIP_CLASS_HPP
