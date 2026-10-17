@ FUN_080fbb08  entry 0x080fbb08  size 44
.thumb
.org 0xfbb08
FUN_080fbb08:
	push {r4, r5, lr}	@ 000fbb08 30b5
.org 0xfbb0a
	adds r5, r0, #0	@ 000fbb0a 051c
.org 0xfbb0c
	adds r4, r5, #0	@ 000fbb0c 2c1c
.org 0xfbb0e
	adds r4, #189	@ 000fbb0e bd34
.org 0xfbb10
	ldrb r0, [r4, #0]	@ 000fbb10 2078
.org 0xfbb12
	cmp r0, #0	@ 000fbb12 0028
.org 0xfbb14
	beq.n 0xfbb22	@ 000fbb14 05d0
.org 0xfbb16
	movs r0, #54	@ 000fbb16 3620
.org 0xfbb18
	bl 0x2624	@ 000fbb18 06f784fd
.org 0xfbb1c
	movs r0, #0	@ 000fbb1c 0020
.org 0xfbb1e
	strb r0, [r4, #0]	@ 000fbb1e 2070
.org 0xfbb20
	b.n 0xfbb28	@ 000fbb20 02e0
.org 0xfbb22
	movs r0, #172	@ 000fbb22 ac20
.org 0xfbb24
	bl 0x2624	@ 000fbb24 06f77efd
.org 0xfbb28
	adds r0, r5, #0	@ 000fbb28 281c
.org 0xfbb2a
	bl 0xe954c	@ 000fbb2a edf70ffd
.org 0xfbb2e
	pop {r4, r5}	@ 000fbb2e 30bc
.org 0xfbb30
	pop {r0}	@ 000fbb30 01bc
.org 0xfbb32
	bx r0	@ 000fbb32 0047
