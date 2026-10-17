// undefined FUN_0800053c(void)
// entry 0x800053c


void FUN_0800053c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  
  iVar3 = 0x03002ed0 + ((*(uint *)(param_1 + 0x10) & 0x3fffffff) >> 0x19) * 0x20;
  *(char *)(param_1 + 0x1b) = (char)param_2;
  iVar1 = 0x0812930c;
  uVar2 = param_2 * 2;
  if (*(char *)(param_1 + 0x19) != *(char *)(param_1 + 0x18)) {
    uVar2 = param_2 * -2 & 0x1ff;
  }
  uVar4 = uVar2 + 0x80 & 0x1ff;
  sVar5 = *(short *)(0x0812930c + uVar4);
  sVar6 = *(short *)(0x0812930c + uVar2);
  if (*(char *)(param_1 + 0x18) != '\0') {
    sVar5 = -sVar5;
    sVar6 = -sVar6;
  }
  *(short *)(iVar3 + 6) = sVar5;
  *(short *)(iVar3 + 0xe) = sVar6;
  sVar5 = *(short *)(iVar1 + uVar4);
  sVar6 = *(short *)(iVar1 + uVar2);
  if (*(char *)(param_1 + 0x19) != '\0') {
    sVar5 = -sVar5;
    sVar6 = -sVar6;
  }
  *(short *)(iVar3 + 0x1e) = sVar5;
  *(short *)(iVar3 + 0x16) = -sVar6;
  return;
}


