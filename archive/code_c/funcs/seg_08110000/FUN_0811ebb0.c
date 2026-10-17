// undefined FUN_0811ebb0(void)
// entry 0x811ebb0


undefined4 FUN_0811ebb0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(DAT_0811ebe0 + 4);
  iVar3 = param_1 + DAT_0811ebe4;
  if (*(char *)(iVar3 + 6) != '\0') {
    if (*(char *)(iVar3 + 6) == ')') {
      cVar1 = *(char *)(iVar3 + 8) + '\x01';
      *(char *)(iVar3 + 8) = cVar1;
      if (cVar1 == '\x04') {
        FUN_0811eb20(param_1,0x2c);
      }
      else if (cVar1 == '\b') {
        FUN_0811eb20(param_1,0x2d);
      }
      else if (cVar1 == '\f') {
        FUN_0811eb20(param_1,0x29);
      }
    }
    iVar5 = iVar5 + DAT_0811ec34;
    uVar2 = 0;
    do {
      FUN_08000b30((short)uVar2 * 0xc + DAT_0811ec38,iVar5,0xc);
      uVar4 = (int)(short)uVar2 + 1;
      iVar5 = iVar5 + 0x40;
      uVar2 = uVar4 & 0xffff;
    } while ((int)(uVar4 * 0x10000) >> 0x10 < 6);
  }
  return in_lr;
}


