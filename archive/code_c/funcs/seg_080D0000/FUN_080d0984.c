// undefined FUN_080d0984(void)
// entry 0x80d0984


undefined4 FUN_080d0984(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = 0x400;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = DAT_080d0998;
  }
  *(int *)(param_1 + 0x58) = iVar2 + iVar3;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 3;
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) ^ 1;
    cVar1 = *(char *)(param_1 + 0xb6);
    if (cVar1 == '\0') {
      cVar1 = '\x01';
    }
    else {
      if (cVar1 == '\x01') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        FUN_08005760(param_1 + 0x74,DAT_080d0a00,param_1 + 0x54,0xff);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      cVar1 = '\x02';
    }
    *(char *)(param_1 + 0xb6) = cVar1;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


