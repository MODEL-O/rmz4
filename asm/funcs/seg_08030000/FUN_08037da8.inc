@ FUN_08037da8  entry 0x08037da8  size 144
.thumb
.org 0x37da8
FUN_08037da8:
	push {r4, r5, lr}	@ 00037da8 30b5
.org 0x37daa
	adds r5, r0, #0	@ 00037daa 051c
.org 0x37dac
	ldrb r0, [r5, #30]	@ 00037dac a87f
.org 0x37dae
	lsls r0, r0, #8	@ 00037dae 0002
.org 0x37db0
	adds r1, r5, #0	@ 00037db0 291c
.org 0x37db2
	adds r1, #112	@ 00037db2 7031
.org 0x37db4
	ldrb r1, [r1, #0]	@ 00037db4 0978
.org 0x37db6
	orrs r1, r0	@ 00037db6 0143
.org 0x37db8
	ldr r2, [pc, #16]	@ 00037db8 044a
.org 0x37dba
	cmp r1, r2	@ 00037dba 9142
.org 0x37dbc
	beq.n 0x37dd0	@ 00037dbc 08d0
.org 0x37dbe
	adds r0, r5, #0	@ 00037dbe 281c
.org 0x37dc0
	adds r1, r2, #0	@ 00037dc0 111c
.org 0x37dc2
	movs r2, #2	@ 00037dc2 0222
.org 0x37dc4
	movs r3, #2	@ 00037dc4 0223
.org 0x37dc6
	bl 0x1cfc8	@ 00037dc6 e5f7fff8
.org 0x37dca
	b.n 0x37de8	@ 00037dca 0de0
.org 0x37dcc
	.byte 0x01,0x0d,0x00,0x00	@ 00037dcc data
.org 0x37dd0
	adds r0, r5, #0	@ 00037dd0 281c
.org 0x37dd2
	adds r0, #113	@ 00037dd2 7130
.org 0x37dd4
	ldrb r0, [r0, #0]	@ 00037dd4 0078
.org 0x37dd6
	lsls r0, r0, #24	@ 00037dd6 0006
.org 0x37dd8
	asrs r0, r0, #24	@ 00037dd8 0016
.org 0x37dda
	cmp r0, #1	@ 00037dda 0128
.org 0x37ddc
	bgt.n 0x37de8	@ 00037ddc 04dc
.org 0x37dde
	adds r0, r5, #0	@ 00037dde 281c
.org 0x37de0
	movs r2, #2	@ 00037de0 0222
.org 0x37de2
	movs r3, #2	@ 00037de2 0223
.org 0x37de4
	bl 0x1cfc8	@ 00037de4 e5f7f0f8
.org 0x37de8
	movs r1, #170	@ 00037de8 aa21
.org 0x37dea
	lsls r1, r1, #1	@ 00037dea 4900
.org 0x37dec
	adds r0, r5, r1	@ 00037dec 6818
.org 0x37dee
	ldrb r0, [r0, #0]	@ 00037dee 0078
.org 0x37df0
	cmp r0, #4	@ 00037df0 0428
.org 0x37df2
	bne.n 0x37e10	@ 00037df2 0dd1
.org 0x37df4
	subs r1, #84	@ 00037df4 5439
.org 0x37df6
	adds r0, r5, r1	@ 00037df6 6818
.org 0x37df8
	movs r4, #0	@ 00037df8 0024
.org 0x37dfa
	strb r4, [r0, #0]	@ 00037dfa 0470
.org 0x37dfc
	ldr r1, [pc, #12]	@ 00037dfc 0349
.org 0x37dfe
	adds r0, r5, #0	@ 00037dfe 281c
.org 0x37e00
	bl 0x1cf00	@ 00037e00 e5f77ef8
.org 0x37e04
	movs r0, #2	@ 00037e04 0220
.org 0x37e06
	strb r0, [r5, #14]	@ 00037e06 a873
.org 0x37e08
	strb r4, [r5, #15]	@ 00037e08 ec73
.org 0x37e0a
	b.n 0x37e3a	@ 00037e0a 16e0
.org 0x37e0c
	.byte 0x10,0x28,0x00,0x00	@ 00037e0c data
.org 0x37e10
	movs r0, #162	@ 00037e10 a220
.org 0x37e12
	lsls r0, r0, #1	@ 00037e12 4000
.org 0x37e14
	adds r1, r5, r0	@ 00037e14 2918
.org 0x37e16
	adds r0, r5, #0	@ 00037e16 281c
.org 0x37e18
	bl 0x39fd8	@ 00037e18 02f0def8
.org 0x37e1c
	lsls r0, r0, #24	@ 00037e1c 0006
.org 0x37e1e
	cmp r0, #0	@ 00037e1e 0028
.org 0x37e20
	beq.n 0x37e3a	@ 00037e20 0bd0
.org 0x37e22
	movs r1, #128	@ 00037e22 8021
.org 0x37e24
	lsls r1, r1, #1	@ 00037e24 4900
.org 0x37e26
	adds r0, r5, r1	@ 00037e26 6818
.org 0x37e28
	movs r2, #0	@ 00037e28 0022
.org 0x37e2a
	movs r1, #3	@ 00037e2a 0321
.org 0x37e2c
	strb r1, [r0, #0]	@ 00037e2c 0170
.org 0x37e2e
	adds r1, #254	@ 00037e2e fe31
.org 0x37e30
	adds r0, r5, r1	@ 00037e30 6818
.org 0x37e32
	strb r2, [r0, #0]	@ 00037e32 0270
.org 0x37e34
	adds r0, r5, #0	@ 00037e34 281c
.org 0x37e36
	bl 0x37c60	@ 00037e36 fff713ff
