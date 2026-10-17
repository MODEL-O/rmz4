// undefined FUN_080a1f98(void)
// entry 0x80a1f98


undefined4 FUN_080a1f98(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x73) == '\x03') || (*(char *)(param_1 + 0x12) == '\0')) {
    if (1 < *(byte *)(param_1 + 0xe)) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      if (*(char *)(param_1 + 0xb4) == '\0') {
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        return in_lr;
      }
      *(char *)(param_1 + 0xb4) = '\0';
      return in_lr;
    }
    FUN_0801cf00(param_1,*(undefined2 *)
                          ((uint)*(byte *)(param_1 + 0xb4) * 2 +
                           ((uint)*(byte *)(param_1 + 0xe) + (uint)*(byte *)(param_1 + 0x10)) * 4 +
                          DAT_080a1fdc));
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(char *)(param_1 + 0xe) == '\x01') && (*(char *)(param_1 + 0x12) != '\0')) &&
     (FUN_0801fe64(2,param_1 + 0x54), (*(byte *)(param_1 + 0x12) & 3) == 0)) {
    FUN_080a20b8(param_1);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}


