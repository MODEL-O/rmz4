// undefined FUN_0801425c(void)
// entry 0x801425c


undefined4 FUN_0801425c(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    return in_lr;
  }
  uVar1 = *(uint *)(param_1 + 0x5c);
  if ((uVar1 & 0xffff) == 0x38) {
    puVar2 = (ushort *)(((uVar1 & 0xffff) >> 4) * 2 + DAT_08014294);
    *puVar2 = (ushort)DAT_08014298 & *puVar2 | 3;
    *(undefined4 *)(param_1 + 0x4c) = 0x2d0;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
  }
  else {
    if ((uVar1 & 0xffff) != 0x24) goto LAB_080142c2;
    puVar2 = (ushort *)(((uVar1 & 0xffff) >> 4) * 2 + DAT_080142cc);
    *puVar2 = (ushort)DAT_080142d0 & *puVar2 | 2;
    *(undefined4 *)(param_1 + 0x4c) = 0x1e0;
    *(undefined4 *)(param_1 + 0x44) = 0xe0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0x100;
LAB_080142c2:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}


