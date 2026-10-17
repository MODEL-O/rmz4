@ FUN_080badb0  entry 0x080badb0  size 20
.thumb
.org 0xbadb0
FUN_080badb0:
	push {lr}	@ 000badb0 00b5
.org 0xbadb2
	ldr r2, [pc, #16]	@ 000badb2 044a
.org 0xbadb4
	ldrb r1, [r0, #13]	@ 000badb4 417b
.org 0xbadb6
	lsls r1, r1, #2	@ 000badb6 8900
.org 0xbadb8
	adds r1, r1, r2	@ 000badb8 8918
.org 0xbadba
	ldr r1, [r1, #0]	@ 000badba 0968
.org 0xbadbc
	bl 0x128f80	@ 000badbc 6ef0e0f8
.org 0xbadc0
	pop {r0}	@ 000badc0 01bc
.org 0xbadc2
	bx r0	@ 000badc2 0047
