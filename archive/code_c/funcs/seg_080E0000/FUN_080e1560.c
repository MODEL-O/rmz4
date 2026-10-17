// undefined FUN_080e1560(void)
// entry 0x80e1560


undefined4 FUN_080e1560(int param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_14 = DAT_080e1590[1];
  local_18 = *DAT_080e1590;
  if (*(byte *)(param_1 + 0x10) < 4) {
    *(undefined2 *)(param_1 + 0x76) = 0x5f00;
    *(undefined1 *)(param_1 + 0x75) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x76) = 0xd200;
    *(undefined1 *)(param_1 + 0x75) = 4;
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + -4;
  }
  pcVar3 = (char *)(param_1 + 0x75);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e1634);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  local_18 = *(int *)(param_1 + 0x54) + local_18;
  local_14 = *(int *)(param_1 + 0x58) + local_14;
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    FUN_080d0dc4(0,&local_18,0x200,*(int *)(param_1 + 0x54) < *(int *)(*DAT_080e1638 + 0x54));
    FUN_080e1508(param_1 + 0x54,*pcVar3 + '\x03',1);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  else if (cVar1 == '\x01') {
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    *(undefined1 *)(param_1 + 0x11) = 2;
    iVar4 = param_1 + 0x54;
    FUN_080e1508(iVar4,*pcVar3 + '\x03',3);
    FUN_080e1508(iVar4,*pcVar3 + '\x03',4);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x2000;
    FUN_080e1508(iVar4,*pcVar3 + '\x03',5);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080e16e8;
    local_18 = local_18 + DAT_080e16ec;
    local_14 = local_14 + 0x1000;
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    local_18 = local_18 + 0x1000;
    local_14 = local_14 + 0x500;
    FUN_080d0c88(2,&local_18);
    local_18 = local_18 + DAT_080e16f0;
    local_14 = local_14 + DAT_080e16f0;
    FUN_080d0c88(2,&local_18);
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0x11) = 2;
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    local_18 = local_18 + DAT_080e1768;
    local_14 = local_14 + 0x1000;
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    FUN_080e1508(param_1 + 0x54,*pcVar3 + '\x03',3);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_080e1a38(param_1);
  if (*(char *)(param_1 + 0x11) == '\x05') {
    *(undefined1 *)(param_1 + 0x11) = 4;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x74) = 1;
  FUN_080e176c(param_1);
  return in_lr;
}


