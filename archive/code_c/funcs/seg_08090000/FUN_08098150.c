// undefined FUN_08098150(void)
// entry 0x8098150


undefined4 FUN_08098150(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_0809822c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == -1) || (sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54)), sVar3 != 0)) {
    iVar1 = DAT_08098230;
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    pbVar5 = (byte *)(param_1 + 0xbc);
    FUN_080d4c8c(&local_18,DAT_08098230,0,*pbVar5);
    FUN_080d4c8c(&local_18,iVar1,0,*pbVar5 | 0x10);
    FUN_080d4c8c(&local_18,iVar1 + 0x1c,0,*pbVar5);
    FUN_080d4c8c(&local_18,iVar1 + 0x38,0,*pbVar5);
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    FUN_0802ab88(2,0x32,param_1 + 0x54);
    if (*(ushort *)(DAT_08098234 + 0xc) <= DAT_08098238) {
      *(ushort *)(DAT_08098234 + 0xc) = *(ushort *)(DAT_08098234 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809823c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  }
  return in_lr;
}


