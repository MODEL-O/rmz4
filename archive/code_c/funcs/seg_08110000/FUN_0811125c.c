// undefined FUN_0811125c(void)
// entry 0x811125c


undefined4 FUN_0811125c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 7) == '\0') {
    *DAT_081112e8 = (short)DAT_081112ec;
    *DAT_081112f0 = (ushort)DAT_081112f4 & *DAT_081112f0 | 0x4f00;
    iVar3 = DAT_081112fc;
    iVar2 = DAT_081112f8;
    *(undefined1 *)(DAT_081112f8 + DAT_081112fc) = 0x20;
    *(undefined1 *)(iVar2 + iVar3 + -1) = 0x20;
    *(undefined1 *)(iVar2 + 0x400) = 0x20;
    *(undefined1 *)(param_1 + DAT_08111300) = 0;
    *(undefined2 *)(param_1 + 8) = 0x4b0;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  if (*(short *)(param_1 + 8) != 0) {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + -1;
  }
  FUN_080025d8(0x89);
  uVar5 = ~(uint)*(ushort *)(param_1 + 8) & 0x3f;
  if (uVar5 < 0x18) {
    uVar5 = FUN_08128fb8(uVar5 << 7,0x18);
    DAT_081112e8[2] = (short)(*(short *)((uVar5 & 0xff) * 2 + DAT_08111304) * 3 >> 6);
  }
  else {
    *(undefined2 *)(DAT_08111334 + 4) = 0;
  }
  pcVar6 = (char *)(param_1 + DAT_08111338);
  if (*pcVar6 == '\0') {
    if ((*(ushort *)(DAT_0811133c + 4) & 8) != 0) {
      FUN_08002b10(2);
      *(undefined1 *)(param_1 + 6) = 3;
      *(undefined1 *)(param_1 + 7) = 0;
      return in_lr;
    }
    if (*(short *)(param_1 + 8) == 0) {
      *pcVar6 = ' ';
    }
    if (*pcVar6 == '\0') {
      return in_lr;
    }
  }
  cVar1 = *(char *)(param_1 + DAT_08111398);
  cVar4 = cVar1 + -1;
  *(char *)(param_1 + DAT_08111398) = cVar4;
  iVar3 = DAT_081113a0;
  iVar2 = DAT_0811139c;
  *(char *)(DAT_0811139c + DAT_081113a0) = cVar4;
  cVar1 = cVar1 + -1;
  *(char *)(iVar2 + iVar3 + -1) = cVar1;
  *(char *)(iVar2 + 0x400) = cVar1;
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0x254) = 4;
    *(undefined1 *)(param_1 + 5) = 3;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return in_lr;
}


