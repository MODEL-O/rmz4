// undefined FUN_0802a570(void)
// entry 0x802a570


undefined8 FUN_0802a570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = *(int *)(DAT_0802a5e8 + DAT_0802a5ec);
  if (((*(char *)(iVar1 + 199) != '\x01') && (*(char *)(iVar1 + 199) != '\x03')) &&
     ((*DAT_0802a5f0 - 3 & 0xffff) < 8)) {
    uVar5 = *DAT_0802a5f0 - 3 & 0xff;
    if (*(char *)(param_1 + 1) == '\0') {
      if (*(char *)(DAT_0802a5f4 + 0x19) != '\0') {
        uVar3 = *(uint *)(uVar5 * 4 + DAT_0802a5f8);
        uVar4 = 1 << (uVar3 & 0xff);
        if ((int)(*(ushort *)(iVar1 + 0xca) & uVar4) >> (uVar3 & 0xff) != 0) goto LAB_0802a5e4;
        *(ushort *)(iVar1 + 0xca) = *(ushort *)(iVar1 + 0xca) | (ushort)uVar4;
        FUN_0810e608(*(undefined2 *)(uVar5 * 2 + DAT_0802a5fc),0);
      }
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    }
    if (*(short *)(DAT_0802a600 + 2) != 0) {
      uVar2 = 1;
      goto LAB_0802a606;
    }
  }
LAB_0802a5e4:
  uVar2 = 0;
LAB_0802a606:
  return CONCAT44(in_lr,uVar2);
}


