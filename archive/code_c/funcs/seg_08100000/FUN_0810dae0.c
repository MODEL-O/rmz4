// undefined FUN_0810dae0(void)
// entry 0x810dae0


undefined4 FUN_0810dae0(int param_1,uint param_2,undefined2 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  char acStack_34 [16];
  undefined1 local_24;
  
  iVar3 = param_1;
  if (param_1 < 0) {
    iVar3 = -param_1;
  }
  local_24 = 0;
  uVar5 = 0xf;
  while( true ) {
    sVar2 = (short)uVar5;
    iVar4 = (int)sVar2;
    if (iVar4 < 1) break;
    cVar1 = FUN_08129050(iVar3,10);
    acStack_34[iVar4] = cVar1 + '0';
    if (iVar3 < 10) break;
    iVar3 = FUN_08128fb8(iVar3,10);
    uVar5 = iVar4 - 1U & 0xffff;
  }
  if (param_1 < 0) {
    sVar2 = (short)(iVar4 + -1);
    acStack_34[(iVar4 + -1) * 0x10000 >> 0x10] = '-';
  }
  FUN_0810da2c(acStack_34 + sVar2,sVar2 + -0xf + (param_2 & 0xffff),param_3);
  return in_lr;
}


