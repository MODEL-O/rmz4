// undefined FUN_08081908(void)
// entry 0x8081908


undefined4 FUN_08081908(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  undefined4 local_38 [4];
  short asStack_28 [8];
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_38[0] = *DAT_080819c4;
    local_38[1] = DAT_080819c4[1];
    local_38[2] = DAT_080819c4[2];
    local_38[3] = DAT_080819c4[3];
    FUN_08129258(asStack_28,DAT_080819c8,0x10);
    pbVar2 = (byte *)(param_1 + 0xb4);
    local_18 = *(int *)(param_1 + 0x54) + (int)asStack_28[(uint)*pbVar2 * 2];
    local_14 = *(int *)(param_1 + 0x58) + (int)asStack_28[(uint)*pbVar2 * 2 + 1];
    FUN_080a4584(&local_18,0,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_0801cf00(param_1,*(undefined2 *)(local_38 + *pbVar2));
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080819fc);
  }
  else {
    FUN_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                           ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                           *(undefined1 *)(param_1 + 0x70)) + DAT_080819d0) * 8 +
                          DAT_080819cc)));
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


