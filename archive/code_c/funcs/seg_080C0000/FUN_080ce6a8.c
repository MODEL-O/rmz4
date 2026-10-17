// undefined FUN_080ce6a8(void)
// entry 0x80ce6a8


undefined4 FUN_080ce6a8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    local_14 = *(undefined4 *)(iVar2 + 0x54);
    local_10 = *(undefined4 *)(iVar2 + 0x58);
    if (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) == '\x01') {
      local_1c = *(undefined4 *)(*DAT_080ce6f8 + 0x54);
      local_18 = *(int *)(*DAT_080ce6f8 + 0x58) + DAT_080ce6fc;
      uVar1 = FUN_0810d3ac(&local_1c,&local_14);
      *(undefined1 *)(iVar2 + 0xb4) = uVar1;
    }
  }
  return in_lr;
}


