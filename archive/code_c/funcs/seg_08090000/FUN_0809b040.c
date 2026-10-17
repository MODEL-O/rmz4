// undefined FUN_0809b040(void)
// entry 0x809b040


undefined4 FUN_0809b040(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  FUN_08129258(auStack_c,DAT_0809b0a0,3);
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(char *)(param_1 + 0xb5) == '\0')) &&
     (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2)) {
    if ((*(char *)(param_1 + 0xb7) != '\x02') && ((*(uint *)(param_1 + 0x8c) & 0x800) != 0)) {
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0809b0dc));
    return in_lr;
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809b0a4);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  *(undefined1 *)(param_1 + 0xd) = auStack_c[*(byte *)(param_1 + 0xb7)];
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_0809b454(param_1);
  return in_lr;
}


