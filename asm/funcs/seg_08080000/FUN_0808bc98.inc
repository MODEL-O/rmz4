@ FUN_0808bc98  entry 0x0808bc98  size 32
.thumb
.org 0x8bc98
FUN_0808bc98:
	push {r4, lr}	@ 0008bc98 10b5
.org 0x8bc9a
	adds r4, r0, #0	@ 0008bc9a 041c
.org 0x8bc9c
	movs r1, #132	@ 0008bc9c 8421
.org 0x8bc9e
	lsls r1, r1, #6	@ 0008bc9e 8901
.org 0x8bca0
	bl 0x1cf00	@ 0008bca0 91f72ef9
.org 0x8bca4
	adds r1, r4, #0	@ 0008bca4 211c
.org 0x8bca6
	adds r1, #186	@ 0008bca6 ba31
.org 0x8bca8
	movs r0, #0	@ 0008bca8 0020
.org 0x8bcaa
	strb r0, [r1, #0]	@ 0008bcaa 0870
.org 0x8bcac
	adds r4, #187	@ 0008bcac bb34
.org 0x8bcae
	movs r0, #4	@ 0008bcae 0420
.org 0x8bcb0
	strb r0, [r4, #0]	@ 0008bcb0 2070
.org 0x8bcb2
	pop {r4}	@ 0008bcb2 10bc
.org 0x8bcb4
	pop {r0}	@ 0008bcb4 01bc
.org 0x8bcb6
	bx r0	@ 0008bcb6 0047
