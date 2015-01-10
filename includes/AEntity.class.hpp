// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AEntity.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 15:03:32 by niccheva          #+#    #+#             //
//   Updated: 2015/01/10 18:28:58 by niccheva         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AENTITY_CLASS_HPP
# define AENTITY_CLASS_HPP

class AEntity {
protected:
	int					_x;
	int					_y;
	char				_form;

	AEntity(void);
	AEntity(AEntity const & src);

	AEntity const		&operator=(AEntity const & rhs);

	virtual ~AEntity(void);

	virtual void		move(int x, int y) = 0;

	int					getX(void) const;
	int					getY(void) const;
	char				getForm(void) const;
};

#endif
