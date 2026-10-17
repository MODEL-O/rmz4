// undefined FUN_080bea34(void)
// entry 0x80bea34


undefined4 FUN_080bea34(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  bVar5 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080beaa0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(iVar6 + 0xc) < 2) {
    if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
      uVar4 = *(undefined4 *)(iVar6 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
    }
    else {
      *(undefined1 *)(iVar2 + 0xc9) = 1;
      *(undefined1 *)(param_1 + 0xb8) = 1;
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080beaa4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


