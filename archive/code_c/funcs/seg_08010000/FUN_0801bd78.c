// undefined FUN_0801bd78(void)
// entry 0x801bd78


undefined4 FUN_0801bd78(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_0801be28;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar3 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar4 * 2 + DAT_0801be28) = (ushort)uVar3 | 0x45;
    *(undefined4 *)(uVar4 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_0801be2c + DAT_0801be30,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    puVar2 = DAT_0801be34;
    *DAT_0801be34 = (short)DAT_0801be38;
    puVar2[1] = 0x1000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_08128f80(param_1,*(undefined4 *)
                        ((uint)*(byte *)(DAT_0801be40 + DAT_0801be44) * 4 + DAT_0801be3c));
  if (((*(ushort *)(DAT_0801be48 + 8) & 8) == 0) && ((*(byte *)(DAT_0801be48 + 0x12) & 1) == 0)) {
    *(int *)(*DAT_0801be4c + 0x1bc) =
         *(int *)(*DAT_0801be4c + 0x1bc) + (int)*(short *)(param_1 + 0x6a);
  }
  return in_lr;
}


