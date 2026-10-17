@ FUN_0808bbc0  entry 0x0808bbc0  size 22
.thumb
.org 0x8bbc0
FUN_0808bbc0:
	lsls r1, r1, #24	@ 0008bbc0 0906
.org 0x8bbc2
	lsrs r1, r1, #24	@ 0008bbc2 090e
.org 0x8bbc4
	lsls r3, r1, #1	@ 0008bbc4 4b00
.org 0x8bbc6
	subs r3, #1	@ 0008bbc6 013b
.org 0x8bbc8
	lsls r2, r3, #2	@ 0008bbc8 9a00
.org 0x8bbca
	adds r2, r2, r3	@ 0008bbca d218
.org 0x8bbcc
	lsls r2, r2, #6	@ 0008bbcc 9201
.org 0x8bbce
	str r2, [r0, #92]	@ 0008bbce c265
.org 0x8bbd0
	adds r0, #184	@ 0008bbd0 b830
.org 0x8bbd2
	strb r1, [r0, #0]	@ 0008bbd2 0170
.org 0x8bbd4
	bx lr	@ 0008bbd4 7047
