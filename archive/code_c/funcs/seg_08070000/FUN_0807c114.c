// undefined FUN_0807c114(void)
// entry 0x807c114


undefined4 FUN_0807c114(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 in_lr;
  byte abStack_20 [4];
  undefined1 auStack_1c [4];
  
  FUN_08129258(abStack_20,DAT_0807c1e0,2);
  FUN_08129258(auStack_1c,DAT_0807c1e4,2);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0807e8c8(param_1,2);
    *(undefined4 *)(param_1 + 0x68) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807c1ec) * 4 +
                        DAT_0807c1e8)));
  iVar2 = *(int *)(param_1 + 0x68) + -1;
  *(int *)(param_1 + 0x68) = iVar2;
  if (iVar2 == 0) {
    bVar1 = *(int *)(param_1 + 0xb4) + 0x7800 < *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 200) =
         *(int *)(param_1 + 0xb4) + *(int *)((uint)abStack_20[bVar1] * 4 + DAT_0807c1f0) + 0x7800;
    *(undefined1 *)(param_1 + 0xbe) = auStack_1c[bVar1];
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


