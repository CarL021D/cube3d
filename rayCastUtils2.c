

void	get_wallX(t_data *data, t_rayC *rayC)
{
	if (rayC->side == 0)
		rayC->wallX = data->posY + rayC->perpWallDist * data->dirY;
	else
		rayC->wallX = data->posX + rayC->perpWallDist * data->dirX;
	rayC->wallX -= floor(rayC->wallX); 
}

void	get_textX(t_data *data,t_rayC *rayC)
{
	rayC->texX = int(rayC->wallX * double(tex->width))
	if (rayC->side == && data->dirX > 0)
		rayC->texX = tex->width - rayC->texX - 1;
	if (rayC->side == 1 && rayC->data < 0)
		rayC->texX = tex->width - rayC->texX - 1;
}

void	draw_rays(t_rayC *rayC, t_tex *tex)
{
	int		y;
	int		texY;
	double	step;
	double	texPos;

	y = rayC->drawStart;
	step = 1.0 * tex->height / rayC->lineHeight;
	texPos = (rayC->drawStart - MAP_HEIGHT / 2 + rayC->lineHeight / 2) * step;
	while (y < rayC->drawEnd)
	{
		texY = (int)texPos & (tex->height - 1);
		texPos += step;

		// TO DO
		// Uint32 color = texture[texNum][texHeight * texY + rayC->texX];
		y++;
	}
}
