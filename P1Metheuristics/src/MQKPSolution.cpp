/*
 * MQKPSolution.cpp
 *
 * Fichero que define los métodos de la clase MQKPSolution. Forma parte del código esqueleto para el problema de las múltiples mochilas cuadráticas, ofrecido para las prácticas de la asignatura Metaheurísticas del Grado de Ingeniería Informática de la Universidad de Córdoba
 *
 * @author Carlos García cgarcia@uco.es
 */

#include "MQKPSolution.h"
#include "MQKPInstance.h"

MQKPSolution::MQKPSolution(MQKPInstance &instance) {
	//TODO completar inicializando las variables miembro. Inicialmente, todos los objetos estarán fuera de las mochilas ( = 0)
}

MQKPSolution::~MQKPSolution() {
	//TODO completar
}

void MQKPSolution::putObjectIn(int object, int knapsack){
	//TODO completar la función asigna un objeto a una mochila, modificador.
}

int MQKPSolution::whereIsObject(int object){
	//TODO completar la función devuelve la mochila en la qu se encuentra insertado un objeto sol[i]
}

