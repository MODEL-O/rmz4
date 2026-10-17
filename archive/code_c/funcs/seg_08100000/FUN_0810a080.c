// undefined FUN_0810a080(void)
// entry 0x810a080


undefined4 FUN_0810a080(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  uVar6 = *(undefined4 *)(param_1 + 0xb4);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  uVar2 = FUN_08128bdc((int)(short)*(undefined4 *)(param_1 + 0x5c),
                       (int)(short)*(undefined4 *)(param_1 + 0x60));
  *(char *)(param_1 + 0x24) = (char)((uVar2 & 0xffff) + 0x4000 >> 8);
  cVar1 = FUN_0810a168(param_1);
  cVar5 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  if (((cVar1 == '\x01') || ((*(uint *)(param_1 + 0x8c) & DAT_0810a114) != 0)) || (cVar5 == '\0')) {
    FUN_081098d4(uVar6,param_1,3);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810a118);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


