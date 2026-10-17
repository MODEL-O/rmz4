// undefined FUN_08033f50(void)
// entry 0x8033f50


undefined4 FUN_08033f50(int param_1)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined4 in_lr;
  
  *(byte *)(param_1 + DAT_08033fc4) = *(byte *)(param_1 + DAT_08033fc4) | 6;
  pbVar3 = (byte *)(param_1 + 0x156);
  puVar4 = (undefined1 *)(param_1 + DAT_08033fcc);
  *puVar4 = *(undefined1 *)((uint)*pbVar3 + DAT_08033fc8);
  iVar2 = DAT_08033fd0;
  FUN_0803a3b0(param_1,*(undefined2 *)((uint)*pbVar3 * 2 + DAT_08033fd0));
  FUN_0803a3f0(param_1,*(undefined2 *)((uint)*pbVar3 * 2 + iVar2));
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 == '\x02') {
    cVar1 = FUN_0802ca64(param_1,0);
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + DAT_08034050) + -1;
      *(char *)(param_1 + DAT_08034050) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *puVar4 = 0xff;
      *(undefined1 *)(param_1 + DAT_08034054) = 4;
      iVar2 = 0x102;
    }
    else {
      *puVar4 = 0xff;
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      iVar2 = 0x100;
    }
    *(undefined1 *)(param_1 + iVar2) = 0;
  }
  else {
    if (cVar1 != '\b') {
      if (*(char *)(param_1 + 0xc0) == '\x02') {
        *(char *)(param_1 + 0xc0) = cVar1;
      }
      else {
        *(char *)(param_1 + 0xc1) = cVar1;
      }
    }
    *(undefined1 *)(param_1 + DAT_08033fec) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}


