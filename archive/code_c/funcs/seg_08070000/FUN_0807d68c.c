// undefined FUN_0807d68c(void)
// entry 0x807d68c


undefined4 FUN_0807d68c(int param_1)

{
  bool bVar1;
  undefined4 in_lr;
  byte abStack_1c [4];
  undefined1 auStack_18 [4];
  
  FUN_08129258(abStack_1c,DAT_0807d708,2);
  FUN_08129258(auStack_18,DAT_0807d70c,2);
  bVar1 = *(int *)(param_1 + 0xb4) + 0x7800 < *(int *)(*DAT_0807d710 + 0x54);
  *(int *)(param_1 + 200) =
       *(int *)(param_1 + 0xb4) + *(int *)((uint)abStack_1c[bVar1] * 4 + DAT_0807d714) + 0x7800;
  *(undefined1 *)(param_1 + 0xbe) = auStack_18[bVar1];
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807d718));
  return in_lr;
}


