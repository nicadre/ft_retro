// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AEntity.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 15:03:32 by niccheva          #+#    #+#             //
//   Updated: 2015/01/11 18:51:40 by llapillo         ###   ########.fr       //
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
	AEntity(float x, float y);

	AEntity const		&operator=(AEntity const & rhs);


public:
	virtual ~AEntity(void);

	virtual void		move(float x, float y) = 0;

	float				getX(void) const;
	float				getY(void) const;
	char				getForm(void) const;

	void				setX(float const x);
	void				setY(float const y);
	void				setForm(char const form);
};

#endif
