@ FUN_080baa90  entry 0x080baa90  size 84
.thumb
.org 0xbaa90
FUN_080baa90:
	push {r4, lr}	@ 000baa90 10b5
.org 0xbaa92
	adds r4, r0, #0	@ 000baa92 041c
.org 0xbaa94
	ldrb r0, [r4, #15]	@ 000baa94 e07b
.org 0xbaa96
	cmp r0, #0	@ 000baa96 0028
.org 0xbaa98
	bne.n 0xbaab6	@ 000baa98 0dd1
.org 0xbaa9a
	adds r0, r4, #0	@ 000baa9a 201c
.org 0xbaa9c
	adds r0, #116	@ 000baa9c 7430
.org 0xbaa9e
	ldr r1, [pc, #68]	@ 000baa9e 1149
.org 0xbaaa0
	bl 0x5784	@ 000baaa0 4af770fe
.org 0xbaaa4
	ldr r1, [pc, #64]	@ 000baaa4 1049
.org 0xbaaa6
	adds r0, r4, #0	@ 000baaa6 201c
.org 0xbaaa8
	bl 0x1cf00	@ 000baaa8 62f72afa
.org 0xbaaac
	movs r0, #1	@ 000baaac 0120
.org 0xbaaae
	strb r0, [r4, #18]	@ 000baaae a074
.org 0xbaab0
	ldrb r0, [r4, #15]	@ 000baab0 e07b
.org 0xbaab2
	adds r0, #1	@ 000baab2 0130
.org 0xbaab4
	strb r0, [r4, #15]	@ 000baab4 e073
.org 0xbaab6
	adds r0, r4, #0	@ 000baab6 201c
.org 0xbaab8
	bl 0x1cff0	@ 000baab8 62f79afa
.org 0xbaabc
	ldrb r0, [r4, #18]	@ 000baabc a07c
.org 0xbaabe
	cmp r0, #0	@ 000baabe 0028
.org 0xbaac0
	beq.n 0xbaac6	@ 000baac0 01d0
.org 0xbaac2
	subs r0, #1	@ 000baac2 0138
.org 0xbaac4
	strb r0, [r4, #18]	@ 000baac4 a074
.org 0xbaac6
	adds r0, r4, #0	@ 000baac6 201c
.org 0xbaac8
	adds r0, #115	@ 000baac8 7330
.org 0xbaaca
	ldrb r0, [r0, #0]	@ 000baaca 0078
.org 0xbaacc
	cmp r0, #3	@ 000baacc 0328
.org 0xbaace
	bne.n 0xbaade	@ 000baace 06d1
.org 0xbaad0
	ldrb r1, [r4, #18]	@ 000baad0 a17c
.org 0xbaad2
	cmp r1, #0	@ 000baad2 0029
.org 0xbaad4
	bne.n 0xbaade	@ 000baad4 03d1
.org 0xbaad6
	movs r0, #6	@ 000baad6 0620
.org 0xbaad8
	strb r0, [r4, #13]	@ 000baad8 6073
.org 0xbaada
	strb r1, [r4, #14]	@ 000baada a173
.org 0xbaadc
	strb r1, [r4, #15]	@ 000baadc e173
.org 0xbaade
	pop {r4}	@ 000baade 10bc
.org 0xbaae0
	pop {r0}	@ 000baae0 01bc
.org 0xbaae2
	bx r0	@ 000baae2 0047
