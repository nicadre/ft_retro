// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AEntity.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 15:03:32 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 13:35:47 by llapillo         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AENTITY_CLASS_HPP
# define AENTITY_CLASS_HPP

class AEntity {
protected:
	float				_x;
	float				_y;
	char				_form;

	AEntity(void);
	AEntity(AEntity const & src);

	AEntity const		&operator=(AEntity const & rhs);

	virtual ~AEntity(void);

	virtual void		move(float x, float y) = 0;

public:

	float				getX(void) const;
	float				getY(void) const;
	char				getForm(void) const;

	void				setX(float const x);
	void				setY(float const y);
	void				setForm(char const form);
};

#endif
