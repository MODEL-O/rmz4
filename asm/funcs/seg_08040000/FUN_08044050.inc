@ FUN_08044050  entry 0x08044050  size 32
.thumb
.org 0x44050
FUN_08044050:
	push {r4, lr}	@ 00044050 10b5
.org 0x44052
	adds r4, r0, #0	@ 00044052 041c
.org 0x44054
	adds r1, r4, #0	@ 00044054 211c
.org 0x44056
	adds r1, #84	@ 00044056 5431
.org 0x44058
	movs r0, #1	@ 00044058 0120
.org 0x4405a
	bl 0xd0c88	@ 0004405a 8cf015fe
.org 0x4405e
	movs r0, #53	@ 0004405e 3520
.org 0x44060
	bl 0x2b10	@ 00044060 bef756fd
.org 0x44064
	adds r0, r4, #0	@ 00044064 201c
.org 0x44066
	bl 0x3a8b4	@ 00044066 f6f725fc
.org 0x4406a
	pop {r4}	@ 0004406a 10bc
.org 0x4406c
	pop {r0}	@ 0004406c 01bc
.org 0x4406e
	bx r0	@ 0004406e 0047
