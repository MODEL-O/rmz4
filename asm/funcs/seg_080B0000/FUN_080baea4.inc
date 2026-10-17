@ FUN_080baea4  entry 0x080baea4  size 64
.thumb
.org 0xbaea4
FUN_080baea4:
	push {r4, lr}	@ 000baea4 10b5
.org 0xbaea6
	adds r4, r0, #0	@ 000baea6 041c
.org 0xbaea8
	ldrb r0, [r4, #15]	@ 000baea8 e07b
.org 0xbaeaa
	cmp r0, #0	@ 000baeaa 0028
.org 0xbaeac
	bne.n 0xbaec6	@ 000baeac 0bd1
.org 0xbaeae
	adds r0, r4, #0	@ 000baeae 201c
.org 0xbaeb0
	adds r0, #116	@ 000baeb0 7430
.org 0xbaeb2
	ldr r1, [pc, #48]	@ 000baeb2 0c49
.org 0xbaeb4
	bl 0x5784	@ 000baeb4 4af766fc
.org 0xbaeb8
	ldr r1, [pc, #44]	@ 000baeb8 0b49
.org 0xbaeba
	adds r0, r4, #0	@ 000baeba 201c
.org 0xbaebc
	bl 0x1cf00	@ 000baebc 62f720f8
.org 0xbaec0
	ldrb r0, [r4, #15]	@ 000baec0 e07b
.org 0xbaec2
	adds r0, #1	@ 000baec2 0130
.org 0xbaec4
	strb r0, [r4, #15]	@ 000baec4 e073
.org 0xbaec6
	adds r0, r4, #0	@ 000baec6 201c
.org 0xbaec8
	bl 0x1d134	@ 000baec8 62f734f9
.org 0xbaecc
	adds r0, r4, #0	@ 000baecc 201c
.org 0xbaece
	adds r0, #115	@ 000baece 7330
.org 0xbaed0
	ldrb r1, [r0, #0]	@ 000baed0 0178
.org 0xbaed2
	cmp r1, #3	@ 000baed2 0329
.org 0xbaed4
	bne.n 0xbaede	@ 000baed4 03d1
.org 0xbaed6
	movs r0, #0	@ 000baed6 0020
.org 0xbaed8
	strb r1, [r4, #13]	@ 000baed8 6173
.org 0xbaeda
	strb r0, [r4, #14]	@ 000baeda a073
.org 0xbaedc
	strb r0, [r4, #15]	@ 000baedc e073
.org 0xbaede
	pop {r4}	@ 000baede 10bc
.org 0xbaee0
	pop {r0}	@ 000baee0 01bc
.org 0xbaee2
	bx r0	@ 000baee2 0047
