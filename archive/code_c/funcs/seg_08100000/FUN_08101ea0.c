// undefined FUN_08101ea0(void)
// entry 0x8101ea0


undefined4 FUN_08101ea0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar3 = **(uint **)(param_1 + 0x28);
  *(uint *)(param_1 + 0xb4) = uVar3;
  uVar4 = (uint)*(byte *)(DAT_08101ee4 + 0xce);
  if (uVar3 == 0) {
    if (*(uint *)(param_1 + 0xbc) == 0xa9) goto LAB_08101f46;
    FUN_08002624(*(uint *)(param_1 + 0xbc) & 0xffff);
    FUN_0800249c(0xa9,uVar4 << 5 | 0x200);
    uVar1 = 0xa9;
  }
  else if (uVar3 < 0x259) {
    if (*(uint *)(param_1 + 0xbc) == 0xa8) goto LAB_08101f46;
    FUN_08002624(*(uint *)(param_1 + 0xbc) & 0xffff);
    FUN_0800249c(0xa8,uVar4 << 5 | 0x200);
    uVar1 = 0xa8;
  }
  else {
    if ((0x708 < uVar3) || (*(uint *)(param_1 + 0xbc) == 0xa7)) goto LAB_08101f46;
    FUN_08002624(*(uint *)(param_1 + 0xbc) & 0xffff);
    FUN_0800249c(0xa7,uVar4 << 5 | 0x200);
    uVar1 = 0xa7;
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
LAB_08101f46:
  FUN_080025d8(*(undefined2 *)(param_1 + 0xbc));
  if (*(char *)(param_1 + 0xd) != '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08101f6c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


