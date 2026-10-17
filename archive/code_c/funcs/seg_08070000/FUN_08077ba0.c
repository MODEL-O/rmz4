// undefined FUN_08077ba0(void)
// entry 0x8077ba0


undefined4 FUN_08077ba0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08078fdc(param_1,0);
    iVar3 = (uint)*(byte *)(param_1 + 0xc5) * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar3 * 0x200;
    iVar1 = FUN_08079048(param_1);
    *(int *)(param_1 + 100) = iVar1 + iVar3 * 0x2800;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_08077c40) * 4 +
                        DAT_08077c3c)));
  FUN_08078f64(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar2 = FUN_0801fb14(DAT_08077c44,param_1 + 0x54);
  if (0x2800 < uVar2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


