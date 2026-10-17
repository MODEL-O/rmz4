@ FUN_080ff958  entry 0x080ff958  size 42
.thumb
.org 0xff958
FUN_080ff958:
	push {lr}	@ 000ff958 00b5
.org 0xff95a
	ldr r1, [r0, #12]	@ 000ff95a c168
.org 0xff95c
	ldr r2, [r1, #44]	@ 000ff95c ca6a
.org 0xff95e
	ldr r3, [r0, #44]	@ 000ff95e c36a
.org 0xff960
	ldr r0, [r0, #20]	@ 000ff960 4069
.org 0xff962
	movs r1, #4	@ 000ff962 0421
.org 0xff964
	ands r0, r1	@ 000ff964 0840
.org 0xff966
	cmp r0, #0	@ 000ff966 0028
.org 0xff968
	beq.n 0xff97e	@ 000ff968 09d0
.org 0xff96a
	movs r0, #8	@ 000ff96a 0820
.org 0xff96c
	ldrsb r0, [r2, r0]	@ 000ff96c 1056
.org 0xff96e
	cmp r0, #0	@ 000ff96e 0028
.org 0xff970
	bne.n 0xff97e	@ 000ff970 05d1
.org 0xff972
	ldr r1, [pc, #16]	@ 000ff972 0449
.org 0xff974
	adds r0, r2, r1	@ 000ff974 5018
.org 0xff976
	ldrb r0, [r0, #0]	@ 000ff976 0078
.org 0xff978
	cmp r0, #0	@ 000ff978 0028
.org 0xff97a
	beq.n 0xff97e	@ 000ff97a 00d0
.org 0xff97c
	str r2, [r3, #44]	@ 000ff97c da62
.org 0xff97e
	pop {r0}	@ 000ff97e 01bc
.org 0xff980
	bx r0	@ 000ff980 0047
