// undefined FUN_0807f564(void)
// entry 0x807f564


undefined4 FUN_0807f564(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0807f5e8);
    FUN_08005784(param_1 + 0x74,DAT_0807f5ec);
    *(undefined1 *)(param_1 + 0xd5) = *(undefined1 *)(param_1 + 0xd4);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
  FUN_0801cff0(param_1);
  iVar2 = DAT_0807f6a0;
  iVar1 = DAT_0807f654;
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807f5f0);
    FUN_0801cff0(param_1);
    FUN_080cee84(param_1,1,0);
    FUN_080cee84(param_1,1,1);
    FUN_08005784(param_1 + 0x74,DAT_0807f5f4);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    FUN_08002b10(0x162);
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      *(undefined1 *)
       (param_1 + 0xd8 + (uint)*(byte *)((uint)*(byte *)(param_1 + 0xd4) * 2 + DAT_0807f6a0)) = 0;
      *(undefined1 *)
       (param_1 + 0xd8 + (uint)*(byte *)((uint)*(byte *)(param_1 + 0xd4) * 2 + iVar2 + 1)) = 0;
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != -1) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(undefined1 *)
     (param_1 + 0xd8 + (uint)*(byte *)((uint)*(byte *)(param_1 + 0xd4) * 2 + DAT_0807f654)) = 1;
    *(undefined1 *)
     (param_1 + 0xd8 + (uint)*(byte *)((uint)*(byte *)(param_1 + 0xd4) * 2 + iVar1 + 1)) = 1;
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807f658);
    FUN_0801cff0(param_1);
    FUN_08005784(param_1 + 0x74,DAT_0807f65c);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


