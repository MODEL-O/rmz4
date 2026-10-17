// undefined FUN_08077d84(void)
// entry 0x8077d84


undefined4 FUN_08077d84(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xcc) + 0xb6) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xcc) + 0xb9) = 1;
    FUN_08078fdc(param_1,0);
    uVar3 = *(byte *)(param_1 + 0xc5) + 1 & 1;
    uVar5 = uVar3 + 1 & 1;
    iVar4 = uVar5 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar4 * 0x200;
    iVar2 = FUN_08079048(param_1,uVar3);
    *(int *)(param_1 + 0x68) = iVar2;
    *(int *)(param_1 + 0x54) = iVar2 + iVar4 * -0x2800;
    *(byte *)(param_1 + 0xc5) = (byte)uVar3;
    *(char *)(param_1 + 0x13) = (char)uVar5;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_08077e54) * 4 +
                        DAT_08077e50)));
  FUN_08078f64(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if (-1 < (int)((iVar2 - *(int *)(param_1 + 0x68)) * ((uint)bVar1 * 2 + -1))) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x68);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


